
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListEntitiesForPolicyResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListEntitiesForPolicyResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/PageInfoDto.h>
#include <huaweicloud/organizations/v1/model/EntityDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListEntitiesForPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEntitiesForPolicyResponse();
    virtual ~ListEntitiesForPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEntitiesForPolicyResponse members

    /// <summary>
    /// 结构列表，每个结构都包含有关指定策略附加到的实体的详细信息。
    /// </summary>

    std::vector<EntityDto>& getAttachedEntities();
    bool attachedEntitiesIsSet() const;
    void unsetattachedEntities();
    void setAttachedEntities(const std::vector<EntityDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<EntityDto> attachedEntities_;
    bool attachedEntitiesIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListEntitiesForPolicyResponse_H_
