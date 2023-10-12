
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlConfigurationRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlConfigurationRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/ApplyConfigurationRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchGaussMySqlConfigurationRequest
    : public ModelBase
{
public:
    SwitchGaussMySqlConfigurationRequest();
    virtual ~SwitchGaussMySqlConfigurationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchGaussMySqlConfigurationRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ApplyConfigurationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ApplyConfigurationRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    ApplyConfigurationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SwitchGaussMySqlConfigurationRequest& dereference_from_shared_ptr(std::shared_ptr<SwitchGaussMySqlConfigurationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlConfigurationRequest_H_
