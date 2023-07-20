
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAliasRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAliasRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyAliasRequest
    : public ModelBase
{
public:
    ModifyAliasRequest();
    virtual ~ModifyAliasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyAliasRequest members

    /// <summary>
    /// 实例备注。  长度可在0~64个字符之间，由字母、数字、汉字、英文句号、下划线、中划线组成。 
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAliasRequest_H_
