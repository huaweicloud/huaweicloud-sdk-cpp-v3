
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InspectionReports_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InspectionReports_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InspectionReports
    : public ModelBase
{
public:
    InspectionReports();
    virtual ~InspectionReports();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InspectionReports members

    /// <summary>
    /// 检查报告ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 检查时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getCheckTime() const;
    bool checkTimeIsSet() const;
    void unsetcheckTime();
    void setCheckTime(const std::string& value);

    /// <summary>
    /// 到期时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(const std::string& value);

    /// <summary>
    /// 目标版本。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 检查结果。 success，表示成功。 failed，表示失败。 running， 表示检查中。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 检查报告详情。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string checkTime_;
    bool checkTimeIsSet_;
    std::string expirationTime_;
    bool expirationTimeIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InspectionReports_H_
