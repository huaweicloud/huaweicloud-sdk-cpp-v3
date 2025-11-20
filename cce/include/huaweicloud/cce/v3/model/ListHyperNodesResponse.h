
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListHyperNodesResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListHyperNodesResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/HyperNode.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListHyperNodesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHyperNodesResponse();
    virtual ~ListHyperNodesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHyperNodesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<HyperNode>& getHyperNodeList();
    bool hyperNodeListIsSet() const;
    void unsethyperNodeList();
    void setHyperNodeList(const std::vector<HyperNode>& value);


protected:
    std::vector<HyperNode> hyperNodeList_;
    bool hyperNodeListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListHyperNodesResponse_H_
