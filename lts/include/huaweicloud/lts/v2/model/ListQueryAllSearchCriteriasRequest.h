
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryAllSearchCriteriasRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryAllSearchCriteriasRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListQueryAllSearchCriteriasRequest
    : public ModelBase
{
public:
    ListQueryAllSearchCriteriasRequest();
    virtual ~ListQueryAllSearchCriteriasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQueryAllSearchCriteriasRequest members

    /// <summary>
    /// 租户想查询的日志流所在的日志组的groupid，一般为36位字符串。  缺省值：None  最小长度：36  最大长度：36
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。  缺省值：None  最小长度：30  最大长度：30
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListQueryAllSearchCriteriasRequest& dereference_from_shared_ptr(std::shared_ptr<ListQueryAllSearchCriteriasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryAllSearchCriteriasRequest_H_
