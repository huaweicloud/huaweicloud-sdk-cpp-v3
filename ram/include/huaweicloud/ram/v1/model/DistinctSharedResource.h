
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_DistinctSharedResource_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_DistinctSharedResource_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 描述共享的不同资源。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  DistinctSharedResource
    : public ModelBase
{
public:
    DistinctSharedResource();
    virtual ~DistinctSharedResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DistinctSharedResource members

    /// <summary>
    /// 资源的统一资源名称。
    /// </summary>

    std::string getResourceUrn() const;
    bool resourceUrnIsSet() const;
    void unsetresourceUrn();
    void setResourceUrn(const std::string& value);

    /// <summary>
    /// 资源的类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 最后一次更新资源共享实例的时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string resourceUrn_;
    bool resourceUrnIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_DistinctSharedResource_H_
