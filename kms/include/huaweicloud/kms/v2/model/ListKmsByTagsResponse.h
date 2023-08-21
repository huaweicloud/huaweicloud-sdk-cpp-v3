
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsByTagsResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsByTagsResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ActionResources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListKmsByTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListKmsByTagsResponse();
    virtual ~ListKmsByTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListKmsByTagsResponse members

    /// <summary>
    /// 资源实例列表，详情请参见resource字段数据结构说明。
    /// </summary>

    std::vector<ActionResources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ActionResources>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ActionResources> resources_;
    bool resourcesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsByTagsResponse_H_
