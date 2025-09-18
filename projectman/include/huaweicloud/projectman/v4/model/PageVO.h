
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PageVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PageVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分页参数返回体
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  PageVO
    : public ModelBase
{
public:
    PageVO();
    virtual ~PageVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageVO members

    /// <summary>
    /// 当前页
    /// </summary>

    std::string getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const std::string& value);

    /// <summary>
    /// 每页条数
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 数据总数
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);


protected:
    std::string page_;
    bool pageIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PageVO_H_
