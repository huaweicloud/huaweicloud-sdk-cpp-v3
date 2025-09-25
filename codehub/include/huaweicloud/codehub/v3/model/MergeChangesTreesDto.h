
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeChangesTreesDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeChangesTreesDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/MergeChangesTrees.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeChangesTreesDto
    : public ModelBase
{
public:
    MergeChangesTreesDto();
    virtual ~MergeChangesTreesDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeChangesTreesDto members

    /// <summary>
    /// 
    /// </summary>

    std::vector<MergeChangesTrees>& getTree();
    bool treeIsSet() const;
    void unsettree();
    void setTree(const std::vector<MergeChangesTrees>& value);


protected:
    std::vector<MergeChangesTrees> tree_;
    bool treeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeChangesTreesDto_H_
