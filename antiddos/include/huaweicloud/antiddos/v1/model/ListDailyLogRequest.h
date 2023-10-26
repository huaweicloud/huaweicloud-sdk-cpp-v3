
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDailyLogRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDailyLogRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ListDailyLogRequest
    : public ModelBase
{
public:
    ListDailyLogRequest();
    virtual ~ListDailyLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDailyLogRequest members

    /// <summary>
    /// 用户EIP对应的ID
    /// </summary>

    std::string getFloatingIpId() const;
    bool floatingIpIdIsSet() const;
    void unsetfloatingIpId();
    void setFloatingIpId(const std::string& value);

    /// <summary>
    /// 可选范围： - desc：表示时间降序 - asc：表示时间升序 默认值为“desc”。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 返回结果个数限制，此次查询返回数量最大值，取值范围：1～100，与offset配合使用。 若“limit”与“offset”均不携带则返回所有主机列表。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 偏移量，“limit”携带时此字段有效。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 用户EIP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);


protected:
    std::string floatingIpId_;
    bool floatingIpIdIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string ip_;
    bool ipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDailyLogRequest& dereference_from_shared_ptr(std::shared_ptr<ListDailyLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDailyLogRequest_H_
