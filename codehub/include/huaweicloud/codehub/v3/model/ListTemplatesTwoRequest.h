
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListTemplatesTwoRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListTemplatesTwoRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/RepositoryTemplateVO2.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ListTemplatesTwoRequest
    : public ModelBase
{
public:
    ListTemplatesTwoRequest();
    virtual ~ListTemplatesTwoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplatesTwoRequest members

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RepositoryTemplateVO2 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RepositoryTemplateVO2& value);


protected:
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;
    RepositoryTemplateVO2 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplatesTwoRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplatesTwoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListTemplatesTwoRequest_H_
