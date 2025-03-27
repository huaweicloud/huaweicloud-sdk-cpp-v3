
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_fields_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_fields_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/bson/Bson.h>
#include <vector>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Update_fields
    : public ModelBase
{
public:
    Update_fields();
    virtual ~Update_fields();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Update_fields members

    /// <summary>
    /// 文档不存在时，插入该完整文档。
    /// </summary>

    Document getUpsert() const;
    bool upsertIsSet() const;
    void unsetupsert();
    void setUpsert(const Document& value);

    /// <summary>
    /// 新增或覆盖更新1个或多个字段的值。 &gt; 禁止修改sortkey的字段。
    /// </summary>

    Document getSet() const;
    bool setIsSet() const;
    void unsetset();
    void setSet(const Document& value);

    /// <summary>
    /// 对1个或多个字段做加法运算，并更新为运算后的值。
    /// </summary>

    Document getAdd() const;
    bool addIsSet() const;
    void unsetadd();
    void setAdd(const Document& value);

    /// <summary>
    /// 删除1个或多个字段。 - 数组元素为待删除字段名。
    /// </summary>

    std::vector<std::string>& getRmv();
    bool rmvIsSet() const;
    void unsetrmv();
    void setRmv(const std::vector<std::string>& value);

    /// <summary>
    /// 插入元素到数组中 &gt; 非数组返回失败。
    /// </summary>

    Document getInsert() const;
    bool insertIsSet() const;
    void unsetinsert();
    void setInsert(const Document& value);


protected:
    Document upsert_;
    bool upsertIsSet_;
    Document set_;
    bool setIsSet_;
    Document add_;
    bool addIsSet_;
    std::vector<std::string> rmv_;
    bool rmvIsSet_;
    Document insert_;
    bool insertIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_fields_H_
