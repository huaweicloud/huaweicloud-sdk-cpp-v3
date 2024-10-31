
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteTagRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteTagRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/DeleteTagsDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteTagRequest
    : public ModelBase
{
public:
    DeleteTagRequest();
    virtual ~DeleteTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTagRequest members

    /// <summary>
    /// 防火墙id，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteTagsDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteTagsDto& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    DeleteTagsDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTagRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteTagRequest_H_
