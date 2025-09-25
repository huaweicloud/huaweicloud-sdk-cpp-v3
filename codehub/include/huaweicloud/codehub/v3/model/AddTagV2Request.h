
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddTagV2Request_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddTagV2Request_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/AddTagsRequest.h>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  AddTagV2Request
    : public ModelBase
{
public:
    AddTagV2Request();
    virtual ~AddTagV2Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTagV2Request members

    /// <summary>
    /// 仓库主键id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AddTagsRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddTagsRequest& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    AddTagsRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddTagV2Request& dereference_from_shared_ptr(std::shared_ptr<AddTagV2Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddTagV2Request_H_
