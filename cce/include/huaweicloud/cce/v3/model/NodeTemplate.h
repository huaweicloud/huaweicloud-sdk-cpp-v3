
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeTemplate_login.h>
#include <huaweicloud/cce/v3/model/NodeTemplate_extendParam.h>
#include <huaweicloud/cce/v3/model/NodeTemplate_runtimeConfig.h>
#include <huaweicloud/cce/v3/model/NodeTemplate_lifeCycle.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplate
    : public ModelBase
{
public:
    NodeTemplate();
    virtual ~NodeTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplate members

    /// <summary>
    /// 
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getImageID() const;
    bool imageIDIsSet() const;
    void unsetimageID();
    void setImageID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate_login getLogin() const;
    bool loginIsSet() const;
    void unsetlogin();
    void setLogin(const NodeTemplate_login& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate_lifeCycle getLifeCycle() const;
    bool lifeCycleIsSet() const;
    void unsetlifeCycle();
    void setLifeCycle(const NodeTemplate_lifeCycle& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate_runtimeConfig getRuntimeConfig() const;
    bool runtimeConfigIsSet() const;
    void unsetruntimeConfig();
    void setRuntimeConfig(const NodeTemplate_runtimeConfig& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate_extendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const NodeTemplate_extendParam& value);


protected:
    std::string os_;
    bool osIsSet_;
    std::string imageID_;
    bool imageIDIsSet_;
    NodeTemplate_login login_;
    bool loginIsSet_;
    NodeTemplate_lifeCycle lifeCycle_;
    bool lifeCycleIsSet_;
    NodeTemplate_runtimeConfig runtimeConfig_;
    bool runtimeConfigIsSet_;
    NodeTemplate_extendParam extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_H_
