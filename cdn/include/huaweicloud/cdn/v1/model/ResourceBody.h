
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ResourceBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ResourceBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/SourceWithPort.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ResourceBody
    : public ModelBase
{
public:
    ResourceBody();
    virtual ~ResourceBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceBody members

    /// <summary>
    /// 源站配置。
    /// </summary>

    std::vector<SourceWithPort>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourceWithPort>& value);


protected:
    std::vector<SourceWithPort> sources_;
    bool sourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ResourceBody_H_
