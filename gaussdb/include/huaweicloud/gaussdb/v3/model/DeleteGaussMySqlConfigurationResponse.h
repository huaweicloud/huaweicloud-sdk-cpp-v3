
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteGaussMySqlConfigurationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteGaussMySqlConfigurationResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteGaussMySqlConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteGaussMySqlConfigurationResponse();
    virtual ~DeleteGaussMySqlConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteGaussMySqlConfigurationResponse members

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 参数模板名称。
    /// </summary>

    std::string getConfigurationName() const;
    bool configurationNameIsSet() const;
    void unsetconfigurationName();
    void setConfigurationName(const std::string& value);


protected:
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string configurationName_;
    bool configurationNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteGaussMySqlConfigurationResponse_H_
