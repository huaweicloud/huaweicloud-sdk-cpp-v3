
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteReadonlyNodeRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteReadonlyNodeRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteReadonlyNodeRequestBody
    : public ModelBase
{
public:
    DeleteReadonlyNodeRequestBody();
    virtual ~DeleteReadonlyNodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteReadonlyNodeRequestBody members

    /// <summary>
    /// 所有需要删除的节点ID。
    /// </summary>

    std::vector<std::string>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteReadonlyNodeRequestBody_H_
