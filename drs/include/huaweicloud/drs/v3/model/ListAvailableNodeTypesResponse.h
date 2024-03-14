
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableNodeTypesResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableNodeTypesResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QuerySupportNodeTypeBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListAvailableNodeTypesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAvailableNodeTypesResponse();
    virtual ~ListAvailableNodeTypesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAvailableNodeTypesResponse members

    /// <summary>
    /// Node规格列表
    /// </summary>

    std::vector<QuerySupportNodeTypeBean>& getNodeTypes();
    bool nodeTypesIsSet() const;
    void unsetnodeTypes();
    void setNodeTypes(const std::vector<QuerySupportNodeTypeBean>& value);


protected:
    std::vector<QuerySupportNodeTypeBean> nodeTypes_;
    bool nodeTypesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableNodeTypesResponse_H_
