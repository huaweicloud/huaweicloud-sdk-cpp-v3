
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlAvailableZoneInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlAvailableZoneInfo_H_


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
/// 可用区信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MysqlAvailableZoneInfo
    : public ModelBase
{
public:
    MysqlAvailableZoneInfo();
    virtual ~MysqlAvailableZoneInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlAvailableZoneInfo members

    /// <summary>
    /// 可用区编码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 可用区描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlAvailableZoneInfo_H_
