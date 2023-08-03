
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateRdsInstanceAliasRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateRdsInstanceAliasRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateRdsInstanceAliasRequest
    : public ModelBase
{
public:
    UpdateRdsInstanceAliasRequest();
    virtual ~UpdateRdsInstanceAliasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateRdsInstanceAliasRequest members

    /// <summary>
    /// 长度可在0~64个字符之间，由字母、数字、汉字、英文句号、下划线、中划线组成。此参数为空时可以清空原有备注。
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateRdsInstanceAliasRequest_H_
