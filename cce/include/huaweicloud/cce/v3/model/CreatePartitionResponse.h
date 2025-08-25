
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreatePartitionResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreatePartitionResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/Partition_metadata.h>
#include <huaweicloud/cce/v3/model/Partition_spec.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  CreatePartitionResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePartitionResponse();
    virtual ~CreatePartitionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePartitionResponse members

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Partition_metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Partition_metadata& value);

    /// <summary>
    /// 
    /// </summary>

    Partition_spec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const Partition_spec& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    Partition_metadata metadata_;
    bool metadataIsSet_;
    Partition_spec spec_;
    bool specIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreatePartitionResponse_H_
