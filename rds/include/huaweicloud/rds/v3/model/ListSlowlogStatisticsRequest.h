
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogStatisticsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogStatisticsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSlowlogStatisticsRequest
    : public ModelBase
{
public:
    ListSlowlogStatisticsRequest();
    virtual ~ListSlowlogStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSlowlogStatisticsRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 当前页号
    /// </summary>

    int32_t getCurPage() const;
    bool curPageIsSet() const;
    void unsetcurPage();
    void setCurPage(int32_t value);

    /// <summary>
    /// 每页多少条记录，取值范围0~100
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);

    /// <summary>
    /// 开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);

    /// <summary>
    /// 语句类型，ALL表示查询所有语句类型，也可指定日志类型 - INSERT - UPDATE - SELECT - DELETE - CREATE - ALL
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 取值范围：\&quot;executeTime\&quot;,表示按执行时间降序排序，不传或者传其他表示按执行次数降序排序
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t curPage_;
    bool curPageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string sort_;
    bool sortIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSlowlogStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSlowlogStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogStatisticsRequest_H_
