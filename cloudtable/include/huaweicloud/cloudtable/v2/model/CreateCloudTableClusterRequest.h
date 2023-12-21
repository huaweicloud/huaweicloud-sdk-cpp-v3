
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateCloudTableClusterRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateCloudTableClusterRequest_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/CreateClusterReqBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CreateCloudTableClusterRequest
    : public ModelBase
{
public:
    CreateCloudTableClusterRequest();
    virtual ~CreateCloudTableClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCloudTableClusterRequest members

    /// <summary>
    /// 语言类型
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateClusterReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateClusterReqBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    CreateClusterReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCloudTableClusterRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCloudTableClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateCloudTableClusterRequest_H_
