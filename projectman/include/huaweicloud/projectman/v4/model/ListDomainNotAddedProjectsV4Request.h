
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListDomainNotAddedProjectsV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListDomainNotAddedProjectsV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListDomainNotAddedProjectsV4Request
    : public ModelBase
{
public:
    ListDomainNotAddedProjectsV4Request();
    virtual ~ListDomainNotAddedProjectsV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainNotAddedProjectsV4Request members

    /// <summary>
    /// 分页索引，偏移量,offset是limit的整数倍，limit&#x3D;10,offset&#x3D;0,10,20...
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的数量,每页最多显示100条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDomainNotAddedProjectsV4Request& dereference_from_shared_ptr(std::shared_ptr<ListDomainNotAddedProjectsV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListDomainNotAddedProjectsV4Request_H_
