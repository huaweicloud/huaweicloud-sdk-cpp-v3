
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBackupTransfersRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBackupTransfersRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ListBackupTransfersRequest
    : public ModelBase
{
public:
    ListBackupTransfersRequest();
    virtual ~ListBackupTransfersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBackupTransfersRequest members

    /// <summary>
    /// 查询记录数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getOrderField() const;
    bool orderFieldIsSet() const;
    void unsetorderField();
    void setOrderField(const std::string& value);

    /// <summary>
    /// 排序规则
    /// </summary>

    std::string getOrderRule() const;
    bool orderRuleIsSet() const;
    void unsetorderRule();
    void setOrderRule(const std::string& value);

    /// <summary>
    /// 筛选字段
    /// </summary>

    std::string getFilterField() const;
    bool filterFieldIsSet() const;
    void unsetfilterField();
    void setFilterField(const std::string& value);

    /// <summary>
    /// 筛选关键字
    /// </summary>

    std::string getFilterContent() const;
    bool filterContentIsSet() const;
    void unsetfilterContent();
    void setFilterContent(const std::string& value);

    /// <summary>
    /// 开始时间戳
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 结束时间戳
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 转储任务类型，默认为manual manual:手动转储任务 auto:自动转储任务
    /// </summary>

    std::string getTransferType() const;
    bool transferTypeIsSet() const;
    void unsettransferType();
    void setTransferType(const std::string& value);

    /// <summary>
    /// 分页页码
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string orderField_;
    bool orderFieldIsSet_;
    std::string orderRule_;
    bool orderRuleIsSet_;
    std::string filterField_;
    bool filterFieldIsSet_;
    std::string filterContent_;
    bool filterContentIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string transferType_;
    bool transferTypeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBackupTransfersRequest& dereference_from_shared_ptr(std::shared_ptr<ListBackupTransfersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBackupTransfersRequest_H_
