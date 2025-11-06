
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LineContentDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LineContentDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  LineContentDto
    : public ModelBase
{
public:
    LineContentDto();
    virtual ~LineContentDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LineContentDto members

    /// <summary>
    /// **参数解释：** 文件行数
    /// </summary>

    int32_t getLineNO() const;
    bool lineNOIsSet() const;
    void unsetlineNO();
    void setLineNO(int32_t value);

    /// <summary>
    /// **参数解释：** 该行对应内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    int32_t lineNO_;
    bool lineNOIsSet_;
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LineContentDto_H_
