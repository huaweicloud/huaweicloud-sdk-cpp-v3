
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Pages_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Pages_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分页查询的公共属性
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  Pages
    : public ModelBase
{
public:
    Pages();
    virtual ~Pages();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Pages members

    /// <summary>
    /// 页面起始页,从0开始
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 总数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Pages_H_
