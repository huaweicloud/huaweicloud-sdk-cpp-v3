
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProtectableRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProtectableRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListProtectableRequest
    : public ModelBase
{
public:
    ListProtectableRequest();
    virtual ~ListProtectableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProtectableRequest members

    /// <summary>
    /// 每页显示的条目数量，每页最多支持50条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 上一次查询最后一条的ID
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 按名称过滤
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 偏移值
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 对象类型
    /// </summary>

    std::string getProtectableType() const;
    bool protectableTypeIsSet() const;
    void unsetprotectableType();
    void setProtectableType(const std::string& value);

    /// <summary>
    /// 资源的状态，如available，error 等
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 根据资源id过滤
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 根据该id过滤属于该服务器的所有磁盘，支持企业多项目的用户才能传入此参数
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string protectableType_;
    bool protectableTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProtectableRequest& dereference_from_shared_ptr(std::shared_ptr<ListProtectableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProtectableRequest_H_
