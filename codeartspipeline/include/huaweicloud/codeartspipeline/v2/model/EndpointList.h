
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointList_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointList_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/Endpoint.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// EndpointList具体信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  EndpointList
    : public ModelBase
{
public:
    EndpointList();
    virtual ~EndpointList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointList members

    /// <summary>
    /// Endpoint的具体信息
    /// </summary>

    std::vector<Endpoint>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<Endpoint>& value);

    /// <summary>
    /// 数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<Endpoint> endpoints_;
    bool endpointsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointList_H_
