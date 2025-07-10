
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_Artifact_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_Artifact_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/Content.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  Artifact
    : public ModelBase
{
public:
    Artifact();
    virtual ~Artifact();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Artifact members

    /// <summary>
    /// 
    /// </summary>

    Content getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const Content& value);

    /// <summary>
    /// 策略类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    Content content_;
    bool contentIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_Artifact_H_
