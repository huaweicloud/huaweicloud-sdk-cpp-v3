
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_lifeCycle_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_lifeCycle_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplate_lifeCycle
    : public ModelBase
{
public:
    NodeTemplate_lifeCycle();
    virtual ~NodeTemplate_lifeCycle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplate_lifeCycle members

    /// <summary>
    /// 
    /// </summary>

    std::string getPreInstall() const;
    bool preInstallIsSet() const;
    void unsetpreInstall();
    void setPreInstall(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPostInstall() const;
    bool postInstallIsSet() const;
    void unsetpostInstall();
    void setPostInstall(const std::string& value);


protected:
    std::string preInstall_;
    bool preInstallIsSet_;
    std::string postInstall_;
    bool postInstallIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_lifeCycle_H_
