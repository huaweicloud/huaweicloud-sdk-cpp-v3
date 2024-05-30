
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UntagResourceReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UntagResourceReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UntagResource 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UntagResourceReqBody
    : public ModelBase
{
public:
    UntagResourceReqBody();
    virtual ~UntagResourceReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UntagResourceReqBody members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getTagKeys();
    bool tagKeysIsSet() const;
    void unsettagKeys();
    void setTagKeys(const std::vector<std::string>& value);


protected:
    std::vector<std::string> tagKeys_;
    bool tagKeysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UntagResourceReqBody_H_
