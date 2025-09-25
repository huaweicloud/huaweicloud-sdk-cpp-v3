
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListStagePluginsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListStagePluginsResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/FullStagePluginsRelationVO_full_stage_plugins_item_list.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListStagePluginsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStagePluginsResponse();
    virtual ~ListStagePluginsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStagePluginsResponse members

    /// <summary>
    /// **参数解释**： 结果集。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<FullStagePluginsRelationVO_full_stage_plugins_item_list>& getFullStagePluginsItemList();
    bool fullStagePluginsItemListIsSet() const;
    void unsetfullStagePluginsItemList();
    void setFullStagePluginsItemList(const std::vector<FullStagePluginsRelationVO_full_stage_plugins_item_list>& value);


protected:
    std::vector<FullStagePluginsRelationVO_full_stage_plugins_item_list> fullStagePluginsItemList_;
    bool fullStagePluginsItemListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListStagePluginsResponse_H_
