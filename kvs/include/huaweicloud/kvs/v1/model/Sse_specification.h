
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Sse_specification_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Sse_specification_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户数据静态加密设置。非必填项，默认不启用静态加密。
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Sse_specification
    : public ModelBase
{
public:
    Sse_specification();
    virtual ~Sse_specification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Sse_specification members

    /// <summary>
    /// 启用静态加密。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 加密类型，支持SSE-KMS-S和SSE-KMS-C。
    /// </summary>

    std::string getSseType() const;
    bool sseTypeIsSet() const;
    void unsetsseType();
    void setSseType(const std::string& value);

    /// <summary>
    /// 加密算法，支持AES256_GCM。
    /// </summary>

    std::string getSseAlgorithm() const;
    bool sseAlgorithmIsSet() const;
    void unsetsseAlgorithm();
    void setSseAlgorithm(const std::string& value);

    /// <summary>
    /// KMS中的用户主密钥ID。非必填项，仅当加密类型是SSE-KMS-C时需要填写该字段。
    /// </summary>

    std::string getCmkId() const;
    bool cmkIdIsSet() const;
    void unsetcmkId();
    void setCmkId(const std::string& value);


protected:
    bool enable_;
    bool enableIsSet_;
    std::string sseType_;
    bool sseTypeIsSet_;
    std::string sseAlgorithm_;
    bool sseAlgorithmIsSet_;
    std::string cmkId_;
    bool cmkIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Sse_specification_H_
