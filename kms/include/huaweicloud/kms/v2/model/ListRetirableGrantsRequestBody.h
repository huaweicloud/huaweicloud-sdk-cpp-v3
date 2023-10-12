
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListRetirableGrantsRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListRetirableGrantsRequestBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListRetirableGrantsRequestBody
    : public ModelBase
{
public:
    ListRetirableGrantsRequestBody();
    virtual ~ListRetirableGrantsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRetirableGrantsRequestBody members

    /// <summary>
    /// 指定查询可退役授权返回记录条数，如果查询记录条数小于存在的条数，响应参数“truncated”将返回“true”，表示存在分页。 取值在授权最大个数范围以内。例如：100
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 分页查询起始位置标识。 分页查询收到的响应参数“truncated”为“true”时，可以发送连续的请求获取更多的记录条数，“marker”设置为响应的“next_marker”的值。例如：10。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 请求消息序列号，36字节序列号。 例如：919c82d4-8046-4722-9094-35c3c6524cff
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);


protected:
    std::string limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListRetirableGrantsRequestBody_H_
