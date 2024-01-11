
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreRequestBody_H_

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
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ListStoreRequestBody
    : public ModelBase
{
public:
    ListStoreRequestBody();
    virtual ~ListStoreRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ListStoreRequestBody members

    /// <summary>
    /// 上次返回的游标位置，本次响应包含该仓名。 - 长度：[3,255] - 取值字符限制：[a-zA-Z0-9_.-]+ &gt; 如果为空，表示后面无更多。
    /// </summary>

    std::string getCursorName() const;
    bool cursorNameIsSet() const;
    void unsetcursorName();
    void setCursorName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string cursorName_;
    bool cursorNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreRequestBody_H_
