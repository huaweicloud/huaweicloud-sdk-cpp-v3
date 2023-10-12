
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlConfigurationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlConfigurationResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ConfigurationSummary2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateGaussMySqlConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateGaussMySqlConfigurationResponse();
    virtual ~CreateGaussMySqlConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGaussMySqlConfigurationResponse members

    /// <summary>
    /// 
    /// </summary>

    ConfigurationSummary2 getConfigurations() const;
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const ConfigurationSummary2& value);


protected:
    ConfigurationSummary2 configurations_;
    bool configurationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlConfigurationResponse_H_
