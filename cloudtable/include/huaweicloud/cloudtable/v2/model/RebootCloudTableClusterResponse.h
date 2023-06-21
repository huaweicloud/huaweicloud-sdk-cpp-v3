
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RebootCloudTableClusterResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RebootCloudTableClusterResponse_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/RestartInstanceRsp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  RebootCloudTableClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    RebootCloudTableClusterResponse();
    virtual ~RebootCloudTableClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RebootCloudTableClusterResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<RestartInstanceRsp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<RestartInstanceRsp>& value);


protected:
    std::vector<RestartInstanceRsp> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RebootCloudTableClusterResponse_H_
