
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ListCcspTenantImagesResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ListCcspTenantImagesResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ImageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ListCcspTenantImagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCcspTenantImagesResponse();
    virtual ~ListCcspTenantImagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCcspTenantImagesResponse members

    /// <summary>
    /// 满足条件的镜像总数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);

    /// <summary>
    /// 镜像列表
    /// </summary>

    std::vector<ImageInfo>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ImageInfo>& value);


protected:
    int32_t totalNum_;
    bool totalNumIsSet_;
    std::vector<ImageInfo> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ListCcspTenantImagesResponse_H_
