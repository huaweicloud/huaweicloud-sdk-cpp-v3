
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPublisherResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPublisherResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PublisherVO.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowPublisherResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPublisherResponse();
    virtual ~ShowPublisherResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPublisherResponse members

    /// <summary>
    /// **参数解释**： 发布商详情。 **取值范围**： 不涉及。 
    /// </summary>

    std::map<std::string, PublisherVO>& getPublisherDetailMap();
    bool publisherDetailMapIsSet() const;
    void unsetpublisherDetailMap();
    void setPublisherDetailMap(const std::map<std::string, PublisherVO>& value);


protected:
    std::map<std::string, PublisherVO> publisherDetailMap_;
    bool publisherDetailMapIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPublisherResponse_H_
