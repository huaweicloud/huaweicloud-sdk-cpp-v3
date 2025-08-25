
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodePoolMetadataUpdate.h>
#include <huaweicloud/cce/v3/model/NodePoolSpecUpdate.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolUpdate
    : public ModelBase
{
public:
    NodePoolUpdate();
    virtual ~NodePoolUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolUpdate members

    /// <summary>
    /// 
    /// </summary>

    NodePoolMetadataUpdate getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NodePoolMetadataUpdate& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolSpecUpdate getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodePoolSpecUpdate& value);


protected:
    NodePoolMetadataUpdate metadata_;
    bool metadataIsSet_;
    NodePoolSpecUpdate spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpdate_H_
