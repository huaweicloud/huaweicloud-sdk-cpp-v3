
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateReportRequestBody_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateReportRequestBody_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateReportRequestBody
    : public ModelBase
{
public:
    CreateReportRequestBody();
    virtual ~CreateReportRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateReportRequestBody members

    /// <summary>
    /// 数据库ID列表，多个用英文逗号分隔
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 结束日期
    /// </summary>

    utility::datetime getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const utility::datetime& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 开始日期
    /// </summary>

    utility::datetime getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const utility::datetime& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 模板ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);


protected:
    std::string dbIds_;
    bool dbIdsIsSet_;
    utility::datetime endDate_;
    bool endDateIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    utility::datetime startDate_;
    bool startDateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateReportRequestBody_H_
