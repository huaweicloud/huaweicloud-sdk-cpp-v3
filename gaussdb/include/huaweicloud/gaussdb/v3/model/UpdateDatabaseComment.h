
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseComment_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseComment_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库备注信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateDatabaseComment
    : public ModelBase
{
public:
    UpdateDatabaseComment();
    virtual ~UpdateDatabaseComment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDatabaseComment members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库备注,长度不能超过512个字符，不能包含回车和特殊字符!&lt;\&quot;&#x3D;&#39;&gt;&amp;。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string comment_;
    bool commentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseComment_H_
