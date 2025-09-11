
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ReportBean
    : public ModelBase
{
public:
    ReportBean();
    virtual ~ReportBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportBean members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbNames() const;
    bool dbNamesIsSet() const;
    void unsetdbNames();
    void setDbNames(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 完成时间
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 格式  - pdf: PDF文件  - zip: zip文件
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 报表ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 报表名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 进度
    /// </summary>

    int32_t getPercentum() const;
    bool percentumIsSet() const;
    void unsetpercentum();
    void setPercentum(int32_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 报表类型 - PDF - ZIP
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 周期 - AUDIT_REPORT_DAY: 按天 - AUDIT_REPORT_WEEK： 按周 - AUDIT_REPORT_MONTH： 按月 - AUDIT_REPORT_YEAR：按年 - AUDIT_REPORT_REAL_TIME：立即
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 地址URL
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string dbIds_;
    bool dbIdsIsSet_;
    std::string dbNames_;
    bool dbNamesIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t percentum_;
    bool percentumIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string templateType_;
    bool templateTypeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportBean_H_
