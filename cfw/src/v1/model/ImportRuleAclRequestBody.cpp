

#include "huaweicloud/cfw/v1/model/ImportRuleAclRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ImportRuleAclRequestBody::ImportRuleAclRequestBody()
{
    fileIsSet_ = false;
}

ImportRuleAclRequestBody::~ImportRuleAclRequestBody() = default;

void ImportRuleAclRequestBody::validate()
{
}

web::json::value ImportRuleAclRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool ImportRuleAclRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent ImportRuleAclRequestBody::getFile() const
{
    return file_;
}

void ImportRuleAclRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool ImportRuleAclRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void ImportRuleAclRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


