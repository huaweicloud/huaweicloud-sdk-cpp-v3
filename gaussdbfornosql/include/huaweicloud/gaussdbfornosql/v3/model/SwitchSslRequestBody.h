
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchSslRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchSslRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SwitchSslRequestBody
    : public ModelBase
{
public:
    SwitchSslRequestBody();
    virtual ~SwitchSslRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchSslRequestBody members

    /// <summary>
    /// ss开关选项。 -“on”，表示NoSQL实例默认开启SSL连接。 -“off”，表示NoSQL实例默认不启用SSL连接。
    /// </summary>

    std::string getSslOption() const;
    bool sslOptionIsSet() const;
    void unsetsslOption();
    void setSslOption(const std::string& value);


protected:
    std::string sslOption_;
    bool sslOptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchSslRequestBody_H_
