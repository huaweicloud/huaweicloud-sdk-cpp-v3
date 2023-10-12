
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListRetirableGrantsResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListRetirableGrantsResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kms/v2/model/Grants.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListRetirableGrantsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRetirableGrantsResponse();
    virtual ~ListRetirableGrantsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRetirableGrantsResponse members

    /// <summary>
    /// grant列表，详情请参见grants字段数据结构说明。
    /// </summary>

    std::vector<Grants>& getGrants();
    bool grantsIsSet() const;
    void unsetgrants();
    void setGrants(const std::vector<Grants>& value);

    /// <summary>
    /// 获取下一页所需要传递的marker值。 当“truncated”为“false”时，“next_marker”为空。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 可退役授权总条数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 是否还有下一页：  - “true”表示还有数据。  - “false”表示已经是最后一页。
    /// </summary>

    std::string getTruncated() const;
    bool truncatedIsSet() const;
    void unsettruncated();
    void setTruncated(const std::string& value);


protected:
    std::vector<Grants> grants_;
    bool grantsIsSet_;
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string truncated_;
    bool truncatedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListRetirableGrantsResponse_H_
