
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersResponse_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ims/model/GlanceImageMembers.h"
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
class HUAWEICLOUD_IMS_EXPORT  GlanceListImageMembersResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceListImageMembersResponse();
    virtual ~GlanceListImageMembersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceListImageMembersResponse members

    /// <summary>
    /// 成员信息
    /// </summary>

    std::vector<GlanceImageMembers>& getMembers();
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(const std::vector<GlanceImageMembers>& value);

    /// <summary>
    /// 视图信息
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


protected:
    std::vector<GlanceImageMembers> members_;
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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersResponse_H_
