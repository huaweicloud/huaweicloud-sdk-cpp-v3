
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListComponentInfosRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListComponentInfosRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListComponentInfosRequest
    : public ModelBase
{
public:
    ListComponentInfosRequest();
    virtual ~ListComponentInfosRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListComponentInfosRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例ID，此参数是用户创建实例的唯一标识。 **约束限制**: 不涉及。 **取值范围**: 只能由英文字母、数字组成，且长度为36个字符。 **默认取值**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为100，不能为负数，最小值为1，最大值为100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 组件类型，过滤拿到需要的组件类型的组件信息，默认为ALL，传参数会查询对应组件信息。 枚举值：   \&quot;ALL\&quot;: 查询所有组件类型。   \&quot;CN\&quot;: 查询CN组件类型。   \&quot;DN\&quot;: 查询DN组件类型。   \&quot;CM\&quot;: 查询CMS组件类型。   \&quot;GTM\&quot;: 查询GTM组件类型。   \&quot;ETCD\&quot;: 查询ETCD组件类型。
    /// </summary>

    std::string getComponentType() const;
    bool componentTypeIsSet() const;
    void unsetcomponentType();
    void setComponentType(const std::string& value);

    /// <summary>
    /// 主组件所在可用区编号，筛选符合条件的组件，默认为ALL，查询实例所有可用区上的节点的组件信息。 当调用接口传入可用区编号时：   相对于DN组件，会查询出的DN分片中的主组件在该可用区上的这个分片的所有副本的组件信息。   相对于CN组件，CN组件没有主备关系，会查询出该可用区上的CN组件信息。   相对于其他组件，会查询该可用区上有没有某个组件类型的主组件，有则会返回该组件类型的所有组件信息，没有则不返回该组件类型的信息。
    /// </summary>

    std::string getAvailabilityZoneId() const;
    bool availabilityZoneIdIsSet() const;
    void unsetavailabilityZoneId();
    void setAvailabilityZoneId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string componentType_;
    bool componentTypeIsSet_;
    std::string availabilityZoneId_;
    bool availabilityZoneIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListComponentInfosRequest& dereference_from_shared_ptr(std::shared_ptr<ListComponentInfosRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListComponentInfosRequest_H_
