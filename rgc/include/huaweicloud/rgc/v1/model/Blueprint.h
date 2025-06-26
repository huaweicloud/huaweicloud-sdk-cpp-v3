
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_Blueprint_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_Blueprint_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  Blueprint
    : public ModelBase
{
public:
    Blueprint();
    virtual ~Blueprint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Blueprint members

    /// <summary>
    /// 模板ID。
    /// </summary>

    std::string getBlueprintProductId() const;
    bool blueprintProductIdIsSet() const;
    void unsetblueprintProductId();
    void setBlueprintProductId(const std::string& value);

    /// <summary>
    /// 模板版本。
    /// </summary>

    std::string getBlueprintProductVersion() const;
    bool blueprintProductVersionIsSet() const;
    void unsetblueprintProductVersion();
    void setBlueprintProductVersion(const std::string& value);

    /// <summary>
    /// 模板部署参数。
    /// </summary>

    std::string getVariables() const;
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::string& value);

    /// <summary>
    /// 模板是否包含多账号资源。
    /// </summary>

    bool isIsBlueprintHasMultiAccountResource() const;
    bool isBlueprintHasMultiAccountResourceIsSet() const;
    void unsetisBlueprintHasMultiAccountResource();
    void setIsBlueprintHasMultiAccountResource(bool value);


protected:
    std::string blueprintProductId_;
    bool blueprintProductIdIsSet_;
    std::string blueprintProductVersion_;
    bool blueprintProductVersionIsSet_;
    std::string variables_;
    bool variablesIsSet_;
    bool isBlueprintHasMultiAccountResource_;
    bool isBlueprintHasMultiAccountResourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_Blueprint_H_
