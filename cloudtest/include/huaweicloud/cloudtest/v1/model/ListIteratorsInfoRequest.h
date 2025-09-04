
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListIteratorsInfoRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListIteratorsInfoRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/IteratorVersionsQueryInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListIteratorsInfoRequest
    : public ModelBase
{
public:
    ListIteratorsInfoRequest();
    virtual ~ListIteratorsInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIteratorsInfoRequest members

    /// <summary>
    /// 
    /// </summary>

    IteratorVersionsQueryInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IteratorVersionsQueryInfo& value);


protected:
    IteratorVersionsQueryInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIteratorsInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ListIteratorsInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListIteratorsInfoRequest_H_
