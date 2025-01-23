
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Ttl_specification_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Ttl_specification_H_

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
/// TTL设置。非必填项，默认不启用TTL。
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Ttl_specification
    : public ModelBase
{
public:
    Ttl_specification();
    virtual ~Ttl_specification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Ttl_specification members

    /// <summary>
    /// TTL开关
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 生存时间，以秒为单位
    /// </summary>

    int32_t getExpireAfterSeconds() const;
    bool expireAfterSecondsIsSet() const;
    void unsetexpireAfterSeconds();
    void setExpireAfterSeconds(int32_t value);

    /// <summary>
    /// 文档中记录TTL过期时间的字段名，字段值为UTC时间，单位秒
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);


protected:
    bool enable_;
    bool enableIsSet_;
    int32_t expireAfterSeconds_;
    bool expireAfterSecondsIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Ttl_specification_H_
