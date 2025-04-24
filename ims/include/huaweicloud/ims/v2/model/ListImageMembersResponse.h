
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageMembersResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageMembersResponse_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/ImageMember.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListImageMembersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListImageMembersResponse();
    virtual ~ListImageMembersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListImageMembersResponse members

    /// <summary>
    /// 成员信息
    /// </summary>

    std::vector<ImageMember>& getMembers();
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(const std::vector<ImageMember>& value);

    /// <summary>
    /// 视图信息
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


protected:
    std::vector<ImageMember> members_;
    bool membersIsSet_;
    std::string schema_;
    bool schemaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageMembersResponse_H_
