
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RenameInstanceNodeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RenameInstanceNodeRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/SingleNodeInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RenameInstanceNodeRequestBody
    : public ModelBase
{
public:
    RenameInstanceNodeRequestBody();
    virtual ~RenameInstanceNodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RenameInstanceNodeRequestBody members

    /// <summary>
    /// 节点信息列表
    /// </summary>

    std::vector<SingleNodeInfo>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<SingleNodeInfo>& value);


protected:
    std::vector<SingleNodeInfo> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RenameInstanceNodeRequestBody_H_
